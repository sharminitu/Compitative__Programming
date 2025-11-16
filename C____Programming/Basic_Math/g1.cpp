// #include <iostream>
// using namespace std;

// int main()
// {

// ios::sync_with_stdio(false);
// cin.tie(nullptr);

//     int T;
//     cin >> T;

  

//     while (T--)
//     {
//         long long a, b;
//         cin >> a >> b;


//         if (b % a == 0)
//         {
//             cout << "true" << endl;
//         }
//         else
//         {
//             cout << "false" << endl;
//         }
//     }

   

//     return 0;
// }
// #include <iostream>
// using namespace std;
// #define optimize() ::ios_base ::sync_with_stdio;cin.tie(0);cout.tie(0);
// int main()


// {

//     optimize()
//     // ios::sync_with_stdio(false);
//     // cin.tie(nullptr);

//     int T;
//     cin >> T;

//     while (T--)
//     {
//         long long a, b;
//         cin >> a >> b;

//         // Check if b is divisible by a
//         if (b % a == 0)
//         {
//             cout << "true\n";
//         }
//         else
//         {
//             cout << "false\n";
//         }
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;

    while (T--)
    {
        long long a, b;
        cin >> a >> b;

        if (b % a == 0)
        {
            cout << "true\n";
        }
        else
        {
            cout << "false\n";
        }
    }

    return 0;
}
