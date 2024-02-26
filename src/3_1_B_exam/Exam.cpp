#include "./Exam.h"

using namespace Exam;

deque<string> Exam::readDeque(istream& input) {
  size_t n;
  auto deq = deque<string>();
  input >> n;
  for (size_t i = 0; i != n; ++i) {
    string name;
    input >> name;
    string topOrBottom;
    input >> topOrBottom;
    if (topOrBottom[0] == 't') {
      deq.push_back(name);
    } else if (topOrBottom[0] == 'b') {
      deq.push_front(name);
    }
  }
  return deq;
}

vector<int> Exam::readRequests(istream& input) {
  size_t n;
  input >> n;
  auto req = vector<int>(n);
  for (size_t i = 0; i != n; ++i) input >> req[i];
  return req;
}

stringstream Exam::_Exam(deque<string>& names, vector<int>& indexes) {
  std::stringstream res;

  for (auto index : indexes) {
    res << names[names.size() - index] << '\n';
  }
  return res;
}

void Exam::Exam(istream& input, ostream& output) {
  auto deque = readDeque(input);
  auto req = readRequests(input);
  auto res = _Exam(deque, req);
  output << res.str();
}
