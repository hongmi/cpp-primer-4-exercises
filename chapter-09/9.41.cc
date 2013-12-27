string::size_type pos = 0;
while ((pos = form.find("Daisy", pos)) != string::npos) {
  form.replace(pos, 5, lastname);
  pos += lastname.size();
 }

//replace 'Ms'
