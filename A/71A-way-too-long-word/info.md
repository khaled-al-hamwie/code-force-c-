# title

Way Too Long Words

## description

in this game we will transfere long words to smaller one
the long words will be larger than 10
we will replace them like that
"localization" => "l10n"
"internationalization" => "i18n"

## input

-   "n" will represent the number of words to enter and it is an (int) from (1 <= n <= 100)
-   then a word with lengths of from 1 to 100 characters

## output

-   Print n lines. The i-th line should contain the result of replacing of the i-th word from the input data.

### steps to solve

-   get the input then store it 🤔 in array
-   then for each word gett the length and check if it is larger than 10
-   if it is larger get the first char and last and add them together
-   else return the same world
