#include <iostream>
using std::cout; using std::cin; using std::endl;
#include <iomanip>

int main() {

  // Set Variables.
  int divisor_cnt1;
  int divisor_cnt2;
  int user_in;
  int i,j;
  int user_remain;
  int check_remain;
  int check_value;

  //Prompt user input.
  cin >> user_in;

  //Check to see if user_in >= 1.
  if (user_in <= 0)
    cout << "Error" << endl;

  //If user_in > 0 Deternmines if input is Highly Composite
  else {
    for (i = user_in; i > 0; i--) {
      user_remain = user_in % i;
      if (user_remain == 0)
        divisor_cnt1++;
    }
    check_value = 2;
    while (check_value != user_in){
      divisor_cnt2 = 0;
      for (j = check_value; j > 0; j--){
        check_remain = check_value % j;
        if (check_remain == 0)
          divisor_cnt2 ++;
      }
      if (divisor_cnt2 >= divisor_cnt1)
        break;
      else {
        check_value++;
      }
    }
    if (divisor_cnt2 == divisor_cnt1)
      cout << "False" << " " << user_in << " " << check_value << " " << divisor_cnt2 << endl;
    if (divisor_cnt2 > divisor_cnt1)
      cout << "False" << " " << user_in << " " << check_value << " " << divisor_cnt2 << endl;
    if (divisor_cnt1 > divisor_cnt2)
      cout << "True" << " " << user_in << " " << divisor_cnt1<< endl;
  }

  return 0;
}
