vector<double> dv;

double sumdv(vector<double> &dv)
{
  double sum = 0;
  
  for (vector<double>::iterator i = dv.begin(); i != dv.end(); ++i) {
    sum += *i;
  }
  return sum;
}

double sumdv2(vector<double>::iterator begin, vector<double>::iterator end)
{
  double sum = 0;
  for (vector<double::iterator i = begin; i != end; ++i) {
    sum += *i;
  }
  return sum;
}
