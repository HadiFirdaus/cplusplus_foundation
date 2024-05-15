#include "QuestManager.h"

int QuestManager::TheQuest = 0;

QuestManager::QuestManager()
{
}

void QuestManager::SetQuest() { TheQuest++; }
int QuestManager::GetQuest(){return TheQuest;}
