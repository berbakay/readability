**About**

An Algoritm which check reading level of a given piece of text.


**To Run**<br>

Clone this repo

`git clone https://github.com/berbakay/readability.git`

Compile code 

`clang -o readability readability.c -lcs50`

run file

`./readability`

enter a string of text - do not start or end with spaces. Any .,?,! will count as end of sentence, double spaces will count extra words.

**Example Output**<br>
Text: Would you like them here or there? I would not like them here or there. I would not like them anywhere.<br>
Grade 2

**Requirements**<br>
A dev environment that can compile and run C code.<br>
CS50 Library https://cs50.readthedocs.io/libraries/cs50/c/