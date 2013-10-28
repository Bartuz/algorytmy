## It's my collection of algorythms that I tried to translate from step-to-step explanation to C++ code.
## Here is short guide how to use uploaded files.

## -  Sieve of Eratosthenes ##
- Count prime numbers in range 1-X where X is any number.
![Gif presenting algorythm](http://upload.wikimedia.org/wikipedia/commons/b/b9/Sieve_of_Eratosthenes_animation.gif "Sieve of Eratosthenes in GIF")
    - Run it in terminal **'./sieve_of_eratosthenes'**.
    - It outputs result to 'result.txt'. 
    - By default it outputs prime numbers from 1-100.
    - You can define different range of numbers. 
        - To do so add argument to run command *(this way - **'./sieve_of_eratosthenes X'**)* where **X** is maximum number in **1-X** range.

## - Leader is series ##
- Found element that in series of N elements that occurs for more than N/2 times
	- Run it in terminal **'./leader_in_series'**.
    - It outputs result to 'result.txt'. 
    - By default it outputs leader number from array of 10 elements filled with numbers in range (1..3).
    - You can define different size of array. 
        - To do so add argument to run command *(this way - **'./leader_in_series X'**)* where **X** is number of elements in array.
        - Example *'./leader_in_series 5'* will run algorythm creating array of size 5 with random numbers in range (1..3)
    - You can define different seed (range of randomized numbers).
        - To do so add argument to run command *(this way - **'./leader_in_series X Y'**)* where **X** is size of an array and **Y** is maximum randomized number in range **(1..Y)**
        - Example *'./leader_in_series 99 100'* will run algorythm creating array of size 99 with random numbers in range (1..100)
