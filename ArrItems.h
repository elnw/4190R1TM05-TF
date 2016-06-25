

#include <vector>
#include "Item.h"
class CArrItems
{
private:
	std::vector<CItem*> vecItems;
public:
	CArrItems();
	~CArrItems();
	void AgregarItem(CItem *objeto);
	void setItem(std::vector<CItem*> arai);

	CItem *getItem(int pos);

};

