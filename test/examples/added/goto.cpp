// Adding this file should trigger a warning.
int main() {
  int i = 0;
  label:
  i++;
  if (i<5) {
    goto label;
  }
  return i;
}
