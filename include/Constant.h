const int BUZZER_IO = 8;

enum Note
{
  A=880,
  A_=920,
  B=990,
  C=534,
  D=587,
  E=659,
  F=698,
  G=784,
};
enum DurationPress
{
  TAP=50,
  SHORT=100,
  LONG=SHORT*4,
};