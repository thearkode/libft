<h1 align="center">Welcome to libft 👋</h1>
<p>
</p>

> Write your own library, containing an extract of important functions for your 42 cursus.
This is a brief documentation with some explanations and questions that arised during the process.

## Author

👤 **thearkode**


FUNCTIONS

check if a parameter is alphanumeric: int ft_isalnum(int c);

check if a parameter is alpha int ft_isalpha(int c);

check if a parameter is ascii int ft_isascii(int c);

check if a parameter is a digit int ft_isdigit(int c);

check if a parameter is printable int ft_isprint(int c);

QUESTIONS

why this functions receive a int an not a char? There are several reasons for this approach. One of them is that you need to be able to represent every char plus the EOF (usually represented by -1). That means that a char or unsigned char doens't have sufficient space to represent what it needs. Also, at the time we didn't have functions prototypes who accepeted char as parameters.

## Show your support

Give a ⭐️ if this project helped you!

***
_This README was generated with ❤️ by [readme-md-generator](https://github.com/kefranabg/readme-md-generator)_
