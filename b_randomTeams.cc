/*
 * =====================================================================================
 *
 *       Filename:  b_randomTeams.cc
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  07/21/16 04:55:54
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <iostream>
#include <cassert>
  int
nPick2 (int n)
{
  if (n < 2)
    return 0;
  return n * (n - 1) / 2;
}

int
main (int argc, char *argv[])
{
  int n;
  int m;
  std::cin >> n >> m;
  int min = 0;
  int average_num = n / m;
  int left_num = n % m;
  if (0 == left_num) 
     min += m * nPick2(average_num);
  else {
    
  }


  int max = nPick2 (n - m + 1);
  std::cout << min << " " << max << std::endl;
  return 0;
}
