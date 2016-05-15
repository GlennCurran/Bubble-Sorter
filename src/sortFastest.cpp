#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

unsigned long int arr_size;
unsigned long int max_size;




int main() {
 cout << "Enter a number for max number in randomised list" << endl;
 cin >> max_size;
 cout << "Enter a number for list size" << endl;
 cin >> arr_size;




    unsigned long int smaller_holder;
    unsigned long int larger_holder;
    unsigned long int no_swap = 0;
    unsigned long int y;
    unsigned long int z;
    unsigned long int i;
    unsigned long int comparisons = 0;
    time_t startTime;
    time_t endTime;
    int d;
    unsigned long int progress;
    unsigned long int q;
    char c;
    char k;
    char a;
    char b;



unsigned long int ar[arr_size];
cout << "Shuffling..." << endl;



srand(time(NULL));
 for (i = 0; arr_size >= i; i++) {

   ar[i] = rand() % max_size;
 };

cout << "Shuffle complete" << endl;
cout << "Enter A to print the shuffled list, enter B to sort the list";
cin >> c;
if (c == 'a') {
    for (i = 0; arr_size >= i; i++) {
     cout << ar[i] << endl;
 };
    cout << "press any key to sort the list" << endl;
    cin >> k;

} else if (c == 'b' ) {



};
cout << "Sorting..." << endl;
startTime = time (NULL);


   while (no_swap < arr_size) {

       // q = 1;
        //progress = 0;
        //if (ar[q] > ar[q - 1]) { // if array begins with a value that's bigger than the next
        //while (ar[q] > ar[q - 1]) { // loop through the array and break out when a value after another is smaller
           // progress++;
            //q++;
           // };
      //  };

  no_swap = 0;
    for (y = 0; arr_size - 1 >= y; y++) {// inital scan through entire array, comparing and switching pairs until array ends
     unsigned long int z = y + 1;
      comparisons++;
      if (ar[y] < ar[z] ) {

           smaller_holder = ar[y];
           larger_holder = ar[z];
           ar[y] = larger_holder;
           ar[z] = smaller_holder;
           no_swap = 0;

    } else {
              no_swap++;

               };
                // reset progress counter

    };
//cout << progress << endl;

  };



endTime = time(NULL);
long int seconds = endTime - startTime;

cout << "sorted m8" << endl;
if (seconds == 0 or 1){

   cout << comparisons << " comparisons made."<< " Took less than a second."<< endl;
}else if (seconds > 1) {
cout << comparisons << " comparisons made."<< comparisons / seconds << " avg. comparisons/sec. Took "<< seconds << " seconds." << endl;
};
cout << "Enter any character to print the array" << endl;

cin >> d;
for (i = 0; arr_size >= i; i++){

         cout << ar[i] << endl;

};








cin >> c;
return 0;
  };

