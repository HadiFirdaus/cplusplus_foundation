#include "Objective.h"
#include "TheStatic.h"

Objective::Objective() {
	
}
void Objective::SetQuest()
{
	TheStatic::count++;
}
int Objective::GetQuest()
{
	return TheStatic::count;
}

