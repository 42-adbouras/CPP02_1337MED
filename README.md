# ToC
- [Introduction](#introduction)
	- Orthodox Canonical Form
	- Fixed Point representation
	- Folating Point representation
- Ex00

# Introduction
- **Orthodox Canonical Form:**\
Going forward, our classes should adhere to the Orthodox Canonical Form unless otherwise specified. This means each class must include the following four member functions:
	- `Default constructor`
	- `Copy constructor`
	- `Copy assignment operator`
	- `Destructor`
- **Fixed Point representation:**\
`Definition:` Fixed-point representation is a method of storing numbers that have a fixed number of digits after the decimal point. This means the position of the decimal point is predetermined.\
**`Structure:`**\
`Integer Part:` A certain number of bits are allocated for the integer part.\
`Fractional Part:` A certain number of bits are reserved for the fractional part.

`Example:` In a fixed-point format with 8 bits for the integer part and 8 bits for the fractional part, the value 5.25 would be stored as:\
	- `Integer:` 00000101 (5 in binary)\
	- `Fractional:` 01000000 (0.25 in binary, since 0.25 × 2<sup>8</sup> = 64)
 
`Advantages:`\
	- Simple arithmetic operations (addition, subtraction).\
	- Predictable memory usage.\
`Disadvantages:`\
	- Limited range and precision (can’t represent very large or very small numbers).\
	- Fixed precision can lead to overflow or underflow in calculations.

- **Folating Point representation:**\
`Definition:` Floating-point representation allows for a wider range of values by using a scientific notation approach. It can represent very large or very small numbers effectively.\
`Structure:` Typically follows the IEEE 754 standard, which includes:\
`Sign Bit:` Indicates the sign of the number (positive or negative).\
`Exponent:` A biased exponent that allows the decimal point to "float."\
`Mantissa (or Significand):` Represents the significant digits of the number.\
`Example:` In a simplified floating-point format:\
For the number -5.75, it might be represented as:
	- `Sign:` 1 (negative)
	- `Exponent`: 10000001 (represents 2<sup>1</sup>, bias of 127)
	- `Mantissa`: 01100000000000000000000 (represents the significant part, normalized).

`Advantages:`\
	- Greater range and flexibility in representing numbers.\
	- Can handle very small and very large values.\
`Disadvantages:`\
	- More complex arithmetic operations (requires normalization, rounding).\
	- Can introduce precision issues (not all decimal fractions can be represented exactly).
