#include <iostream>
#include <string>
#include <vector>

using std::vector;
using std::string;
using std::cout;
using std::endl;
using std::max;

string::size_type width(const vector<string>& v) {
  string::size_type maxlen = 0;
  for (vector<string>::size_type i = 0; i != v.size(); ++i) {
    maxlen = max(maxlen, v[i].size());
  }
  return maxlen;
}

vector<string> frame(const vector<string>& v) {
  vector<string> ret;
  string::size_type maxlen = width(v);
  string border(maxlen + 4, '*');

  ret.push_back(border);
  for (vector<string>::size_type i = 0; i != v.size(); ++i) {
    ret.push_back("* " + v[i] + string(maxlen - v[i].size(), ' ') + " *");
  }
  ret.push_back(border);
  return ret;
}

vector<string> vcat(const vector<string>& top, const vector<string>& bottom) {
  vector<string> ret = top;
  //for (vector<string>::size_type i = 0; i < bottom.size(); i++) {
  //  ret.push_back(bottom[i]);
  //}
  ret.insert(ret.end(), bottom.begin(), bottom.end());
  return ret;
}

vector<string> hcat(const vector<string>& left, const vector<string>& right) {
  vector<string> ret;
  string::size_type width1 = width(left) + 1;

  vector<string>::size_type i = 0, j = 0;
  while (i != left.size() || j != right.size()) {
    string s;
    if (i != left.size()) {
      s = left[i++];
    }
    s += string(width1 - s.size(), ' ');
    if (j != right.size()) {
      s += right[j++];
    }
    ret.push_back(s);
  }
  return ret;
}

int main() {
  vector<string> s;
  vector<string> t;
  s.push_back("hoge hgoe hoge");
  s.push_back("hoge hgoe");
  s.push_back("hoge hgoe hoge");
  s.push_back("hoge hgoe");

  t.push_back("foo baa ffooooooooo");
  t.push_back("foo baa ffooooooooo");
  t.push_back("foo baa ffooooooooo");
  t.push_back("foo baa ffooooooooo");

  vector<string> o = frame(s);
  vector<string> b = frame(t);
  vector<string> h = hcat(o, b);
  for (int i = 0; i < h.size(); ++i) {
    cout << h[i] << endl;
  }
}
