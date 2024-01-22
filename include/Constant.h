const int BUZZER_ID = 8;
const int MODIFIER = 1;

enum Notes
{
  A = 880 * MODIFIER,
  A_ = 920 * MODIFIER,
  B = 990 * MODIFIER,
  C = 534 * MODIFIER,
  D = 587 * MODIFIER,
  E = 659 * MODIFIER,
  F = 698 * MODIFIER,
  G = 784 * MODIFIER,
};
enum DurationPress
{
  SHORT = 100,
  LONG = SHORT * 4,
};