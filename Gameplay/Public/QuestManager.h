#pragma once

class QuestManager {
	
public:
	QuestManager();
	static void SetQuest();
	static int GetQuest();

private:
	static int TheQuest;
};