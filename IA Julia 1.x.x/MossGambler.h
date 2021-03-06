#include "User.h"

#ifdef _GS
#ifndef MOSS_H
#define MOSS_H

class cMoss
{
    public:
        void Load();
        void LoadMainConfig();
        void LoadItemInfo();
		void LoadRespawnInfo();
        void LoadTimeConfig();
        void DataSendMoss(int Index);

        void Spawn();
        void Disappear();

        BOOL BuyItem(int aIndex, unsigned char * aRecv);

        void FillingCItemStruct();

        int RandValue(int IndexOption);
        int GetItem(int group);
        void ItemByteConvert(unsigned char* buf, CItem item);

        void GetNameItem(char* input,char *output);

        void CheckTime();
        BOOL GetStatusMoss();

        bool Delay;
        BOOL Opened;

        struct
        {
            int Enable;
            int EnableTimer;
            int UsePK;
            int PriceZen;
            int PricePCPoint;
            int PriceWCoin;
            int RandExc;
            int MaxExcOpt;
            int RandLevel;
            int MaxLevel;
            int RandOptAdd;
            int MaxOptAdd;
            int RandLuck;
            int RandSkill;
            int RandAncient;
        } Config;
    private:
        struct
        {
            int Index;
            char Name[50];
        } ItemInfo[6][100];
        short OrderItems[6];

        struct
        {
            int hour;
            int minute;
            int delay;
            int closehour;
            int closemin;
        } Timer[128];

		struct
		{
			int Mob;
			int Map;
			int Speed;
			int X1;
			int Y1;
			int X2;
			int Y2;
			int Dir;
		} SpawnCoord;

        int AmountTimers;
        int BuyType;
};

extern cMoss Moss;

#endif
#endif