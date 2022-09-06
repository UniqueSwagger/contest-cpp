#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    // The problem is make to a palindrome from a string adding only one letter at anywhere in the string even if the string is already a palindrome. Print the string after making it a palindrome. Else print "NA".
    while (cin >> s)
    {
        bool flag = false; // initially lets assume the string is not a palindrome even if it was a palindrome . so flag is false.
        for (int i = 0; i < s.size() + 1 && !flag; i++)
        // what does it mean by this loop and its condition ? Here i defines the index of the string and it will run from 0 to the size of the string + 1. The loop will run until the flag is false.
        // For example lets say the s string is "revive" and the size of the string is 6. So the loop will run from 0 to 7.
        {
            for (int j = 'a'; j <= 'z' && !flag; j++)
            // what does it mean by this loop and its condition ? Here j defines the character and it will run from 'a' to 'z' like a , b , c , d , e , f , g , h , i , j , k , l , m , n , o , p , q , r , s , t , u , v , w , x , y , z. The loop will run until the flag is false.
            {
                string t = s.substr(0, i) + string(1, j) + s.substr(i); // what does it mean by this line ? Here we are adding the character j at the index i of the string s.
                // For example lets say the s string is "revive".
                // For the first iteration of the loop, i=0 and j=a. So the t string will be "arevive".Here we are adding the character j at the index i of the string s.
                // revive.substr(0,0) + string(1,'a') + revive.substr(0) = arevive.
                // lets understand part by part . What if we do revive.substr(0,0) ? It will return an empty string. What if we do string(1,'a') ? It will return a string with character 'a'. What if we do revive.substr(0) ? It will return the string "revive".
                // For the second iteration of the loop, i=0 and j=b. So the t string will be "brevive".Here we are adding the character j at the index i of the string s.
                // revive.substr(0,0) + string(1,'b') + revive.substr(0) = brevive. Like this it will run for all the characters from a to z.

                //(will be a palindrome at last) For example when i becomes 7 and j becomes r then the t string will be "reviver".Here we are adding the character j at the index i of the string s.

                string u = t; // what does it mean by this line ? Here we are copying the string t to string u. For example lets say the t string is "arevive". So the u string will be "arevive".
                // again if it is reviver then u will be reviver.
                reverse(u.begin(), u.end()); // what does it mean by this line ? Here we are reversing the string u. For example lets say the u string is "arevive". After reversing the string u will be evivera. // again if it is reviver then u will be reviver.

                if (t == u)
                // what does it mean by this line ? Here we are checking if the string t is equal to string u. For example lets say the t string is "arevive" and the u string is "evirva". So the condition will be false.
                // again if it is reviver then u will be reviver and t will be reviver so the condition will be true.
                {
                    flag = true; // after getting our answer we are making the flag true so that the loop will not run again.
                    cout << t << endl;
                    break;
                }
            }
        }
        if (!flag)
            cout << "NA" << endl;
    }
    return 0;
}