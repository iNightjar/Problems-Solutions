#include <bits/stdc++.h>
using namespace std;
int fr[1000000] , arr[1000000];
int main()
{
    int n;
    scanf("%d" , &n);
    for(int i = 0 ; i < n ; ++i)
        scanf("%d" , &arr[i]);
    for(int i = 0 ; i < n ; ++i)
        ++fr[arr[i]];						//we will extend the problem to input string instead of numbers and will use ++fr[s[i] - 'a'] if the string
												//consisting of lowercase letters
    for(int i = 0 ; i < n ; ++i)
        printf("%d %d\n" , i , fr[i]);
}

/*
Tutorials
freqyency array:
https://youtu.be/EmLzUmaQWY0
problems :
https://codeforces.com/problemset/problem/520/A
https://codeforces.com/problemset/problem/47/B
-------------------------------------------------
lexicographical order 
https://en.wikipedia.org/wiki/Lexicographical_order
Input :  "hello python program how are you"
Output :  are
          hello
          how
          program
          python
          you

Input :   "Coders loves the algorithms"
Output :  Coders
          algorithms
          loves
          the
          
----------------------------------------------
for google jobs ;
careers.google.com
https://www.linkedin.com/jobs
for interview preparing :
https://www.pdfdrive.com/cracking-the-coding-interview-books.html

any question ?
feel free to ask about anything
www.facebook.com/ProgAhmedSalah98
ask.fm/Eng_A_Salah
ahmed.salahfci1164@gmail.com


thank's for your time and  hope to help you :)
finally , you should practice on your english skills to be prepared for the interview
*/