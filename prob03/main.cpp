// Name: Kaylee Bliaya
// Sales prediction

#include <iostream>

int main ()
{
  const long SALES1 = 2103419277;
  const double INCREASE = 0.18;
  long sales2;

  // Display the sales for last year (2018).
  std::cout << "Last year's sales were " << SALES1 << '\n';

  //Calculate the sales prediction for next year.
  sales2 = SALES1 + (SALES1 * INCREASE);

  //Display the sales prediction for next year.
  std::cout << "This year's sales prediction: " <<static_cast<long>(sales2) << '\n';

  return 0;
}
