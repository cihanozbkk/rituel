	//Search for:
		BDRAGON_SCROLL	= 6,
	//Paste directly under it:
		RITUALS_SCROLL = 8,
	
	//Search for: 
		else if (pkItemScroll->GetValue(0) == BDRAGON_SCROLL)
		{
			.....
		}
	//Under the fucntion paste:
		//RITUALS_SCROLL
		else if (pkItemScroll->GetValue(0) == RITUALS_SCROLL)
		{
			if (item->GetLevelLimit() < pkItemScroll->GetValue(1))
			{
				ChatPacket(CHAT_TYPE_INFO, LC_TEXT("you can only upgrade items above level %d", pkItemScroll->GetValue(1)));
				return false;
			}
		}
	
		//Search for:
			if (pkItemScroll->GetValue(0) == HYUNIRON_CHN || 
			pkItemScroll->GetValue(0) == YONGSIN_SCROLL || 
			pkItemScroll->GetValue(0) == YAGONG_SCROLL )
		//Replace with:
			if (pkItemScroll->GetValue(0) == HYUNIRON_CHN || 
			pkItemScroll->GetValue(0) == YONGSIN_SCROLL || 
			pkItemScroll->GetValue(0) == YAGONG_SCROLL || 
			pkItemScroll->GetValue(0) == RITUALS_SCROLL )
	
		//Search for:
			else if (pkItemScroll->GetValue(0) == HYUNIRON_CHN )
		//Replace with:
			else if (pkItemScroll->GetValue(0) == HYUNIRON_CHN || pkItemScroll->GetValue(0) == RITUALS_SCROLL)
	
		//Search for:
			if (pkItemScroll->GetValue(0) == HYUNIRON_CHN )
		//Replace With
			if (pkItemScroll->GetValue(0) == HYUNIRON_CHN || pkItemScroll->GetValue(0) == RITUALS_SCROLL)
	
		//Search for:
			else if (pkItemScroll->GetValue(0) == YAGONG_SCROLL)
			{
				szRefineType = "YAGONG_SCROLL";
			}
		//Paste under the function:
			//RITUALS_SCROLL
			else if (pkItemScroll->GetValue(0) == RITUALS_SCROLL)
			{
				success_prob += pkItemScroll->GetValue(2); //increases the success probability by Value(2)%
				szRefineType = "RITUALS_SCROLL";
			}
	
		//Search for:
			else if (pkItem->GetValue(0) == BDRAGON_SCROLL)
			{
				if (pkTarget->GetRefineSet() != 702) return false;
				RefineInformation(pkTarget->GetCell(), REFINE_TYPE_BDRAGON, pkItem->GetCell());
			}
		//Paste under:
			else if (pkItem->GetValue(0) == RITUALS_SCROLL)
			{
				if(pkTarget->GetLevelLimit() =< pkItem->GetValue(1)) return false;
				RefineInformation(pkTarget->GetCell(), REFINE_TYPE_RITUALS_SCROLL, pkItem->GetCell());
			}
	
		//Search for: (inside case USE_DETACHMENT )
							else
							{
								RefineItem(item, item2);
							}
		//Paste ABOVE:
							if (item->GetValue(0) == RITUALS_SCROLL)
							{
								if (item2->GetLevelLimit() < item->GetValue(1))
								{
									ChatPacket(CHAT_TYPE_INFO, LC_TEXT("you can only upgrade items above level %d", item->GetValue(1)));
									return false;
								}
								else
									RefineItem(item, item2);
							}
