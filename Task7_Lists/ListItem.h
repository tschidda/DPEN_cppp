class ListItem{
public:
	ListItem(ListItem *prev, ListItem *next, int content);
	~ListItem();
	int & getContent();
	ListItem * getNext(), *getPrevious();
	
private:
	int content;
	ListItem * next, * previous;
	
	ListItem (const ListItem &toCpoy)=delete;
	ListItem& operator= (const ListItem &other)=delete;
};