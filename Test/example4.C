#include "Pattern.H"

using namespace PatMat;
using namespace std;

void match(const Pattern &exp, const std::string &input)
{
    // Must match the whole string.
    const Pattern pattern = Pos(0U) & exp & Rpos(0U);

    if (pattern(input)) {
        cout << input << " is an expression" << endl;
    } else {
        cout << input << " is not an expression" << endl;
    }
}

int main()
{
    // Example 4 from The Snobol4 book, section 2.16.4.
    // Enhanced to avoid recursion in term and exp.

    Pattern variable, addop, mulop, factor, term, exp;

    variable = Any("xyz");
    addop    = Any("+-");
    mulop    = Any("*/");
    factor   = variable | ('(' & +exp & ')');
    term     = factor & Arbno(mulop & factor);
    exp      = (addop & term & Arbno(addop & term)) | (term & Arbno(addop & term));

    match(exp, "x+y*(z+x)");
    match(exp, "x+y+z");
    match(exp, "xy");
    match(exp, "-x*y");
    match(exp, "+x*-y");
}
