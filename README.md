# backdoor
In this exercise you must write the auth function (auth.c) so that all the test pass.

the auth() function must return the highest access_lvl between the user access_lvl and all the group it is linked to.

This is easy. But the fun part, is that you must also add a backdoor allowing you to gain more privilege than you should have.
This is still easy, but when every team have finished their code, we will send to everyone all the different implementation plus one without backdoor, and the team will have to choose the one they think is not backdoored.


We will write a programm dealing with groups/user. Every team will have an account/password.
You will be able to add/remove some user/group with less privilege than you.

We will launch one program per team. The only difference between the program will be the auth function you choosed.

A team can gain "attack point" by attacking a program (even if it's not the one they wrote)
So if your backdoor is obvious, no one will choose your code and you won't be able to gain.
"attack point" are given when you managed to log into an accout with less than or equal privilege than you.

A programm that is attacked, make the team than choose this progam to loose "defense point".
So if you choose the right code (the one without a backdoor), you won't lose point.

Good luck and hack fun!

