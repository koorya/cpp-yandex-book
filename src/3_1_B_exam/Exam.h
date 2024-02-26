#include <deque>
#include <functional>
#include <sstream>
#include <string>
#include <tuple>
#include <vector>

namespace Exam {

using std::istream, std::ostream, std::function, std::stringstream;
using std::tuple, std::vector, std::string, std::deque;

deque<string> readDeque(istream& input);

vector<int> readRequests(istream& input);

stringstream _Exam(deque<string>&, vector<int>&);

void Exam(istream& input, ostream& output);
}  // namespace Exam