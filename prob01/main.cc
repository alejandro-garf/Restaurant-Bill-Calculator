#include <iomanip>
#include <iostream>

const double kTaxRate = 0.075;

int main() {
  double kMealCost, kTipPercentage, kTaxAmount, kTipAmount, kTotalAmount;

  std::cout << "Please input meal cost: ";
  std::cin >> kMealCost;

  std::cout << "Please input tip percentage: ";
  std::cin >> kTipPercentage;

  kTaxAmount = kMealCost * kTaxRate;
  kTipAmount = kMealCost * (kTipPercentage / 100);
  kTotalAmount = kMealCost + kTaxAmount + kTipAmount;

  std::cout << std::fixed << std::setprecision(2);
  std::cout << "\nRestaurant Bill"
            << "\n";
  std::cout << "===================="
            << "\n"
            << "Subtotal: $" << kMealCost << "\n";
  std::cout << "Taxes: $" << kTaxAmount << "\n";
  std::cout << "Tip: $" << kTipAmount << "\n";
  std::cout << "====================\n";
  std::cout << "Total: $" << kTotalAmount << "\n";

  return 0;
}
