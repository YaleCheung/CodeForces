// reference from https://github.com/paulot/codeforces/blob/master/550c.cpp. because the same thoughts.
// However, the dp method is still needed
#include <iostream>
#include <string>

using namespace std;

string nums[125] = 
  { "0", "8", "16", "24", "32", "40", "48", "56", "64", "72", "80",
    "88", "96", "104", "112", "120", "128", "136", "144", "152",
    "160", "168", "176", "184", "192", "200", "208", "216", "224",
    "232", "240", "248", "256", "264", "272", "280", "288", "296",
    "304", "312", "320", "328", "336", "344", "352", "360", "368",
    "376", "384", "392", "400", "408", "416", "424", "432", "440",
    "448", "456", "464", "472", "480", "488", "496", "504", "512",
    "520", "528", "536", "544", "552", "560", "568", "576", "584",
    "592", "600", "608", "616", "624", "632", "640", "648", "656",
    "664", "672", "680", "688", "696", "704", "712", "720", "728",
    "736", "744", "752", "760", "768", "776", "784", "792", "800",
    "808", "816", "824", "832", "840", "848", "856", "864", "872",
    "880", "888", "896", "904", "912", "920", "928", "936", "944",
    "952", "960", "968", "976", "984", "992" };

bool inString(string &needle, string &haystack) {
  int in = 0;
  for (int i = 0; i < haystack.size(); i++) {
    if (needle[in] == haystack[i]) in++;
    if (in == needle.size()) return true;
  }
  return false;
}

int main() {
  string in;
  cin >> in;
  for (int i = 0; i < 125; i++)
    if (inString(nums[i], in)) { cout << "YES" << endl << nums[i] << endl; return 0; }
  cout << "NO" << endl;
  return 0;
}
