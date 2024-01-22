const int BUZZER_IO = 8;

enum Note
{
  C_3=131, // Do
  D_3=146, // Re
  E_3=163, // Mi
  F_3=174, // Fa
  G_3=196, // Sol
  A_3=220, // La
  Ab_3=233, // La+
  B_3=246, // Si

  C_4=261, // Do
  D_4=294, // Re
  E_4=329, // Mi
  F_4=349, // Fa
  G_4=392, // Sol
  A_4=440, // La
  Ab_4=466, // La+
  B_4=493, // Si

  C_5=523, // Do
  D_5=587, // Re
  Db_5=554, // Re
  E_5=659, // Mi
  F_5=698, // Fa
  G_5=783, // Sol
  A_5=880, // La
  Ab_5=932, // La+
  B_5=987, // Si
};
enum DurationPress
{
  TAP=50,
  SHORT=100,
  LONG=SHORT*4,
};