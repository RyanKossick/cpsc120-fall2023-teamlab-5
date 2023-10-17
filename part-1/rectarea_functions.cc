// Fidelis Okorie
// fokorie@csu.fullerton.edu
// @Maxawesome101
// Partners: @Ryankossick

#include "rectarea_functions.h"
// using namespace std;
// Prompt for an integer input and return the integer value
//
// The function takes one argument which is the prompt printed
// to the terminal.
//
// The function returns an integer value which is whatever was
// typed at the terminal.
//
// Typical usage:
//   int height{PromptForInt("How tall are you? ")};
//   n_fingers = PromptForInt("How many fingers do you have? ");
int PromptForInt(const std::string& query) {
  std::cout << query;
  int user_input{0};
  std::cin >> user_input;

  return user_input;
}

// Calculate the area of a triangle defined by length and width.
//
// The area of a triangle is the product of the length and width.
//
// Although rectangles with negative length and width exist, this program
// is meant to be used to calculate the positive area of rectangles one
// could encounter in the physical world.
//
// Because of this requirement, length and width must be positive
// integers. Values less than 1 mean that the rectangle has 0 area.
//
// Typical usage:
//   int input_length{13};
//   int input_width{17};
//   int area{RectangleArea(input_length, input_width)};
//
// \param length the length of the rectangle
// \param width the width the rectangle
// \returns the area of the rectangle defined by \p length and \p width
int RectangleArea(int length, int width) {
  int area{0};
  if (length > 0 && width > 0) {
    area = length * width;
  }

  return area;
}
