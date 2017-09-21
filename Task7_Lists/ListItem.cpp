#include "ListItem.h"

ListItem::ListItem(ListItem* p=nullptr, ListItem* n=nullptr, int c=0){
		content=c;
		next=n;
		previous=p;
}

ListItem::~ListItem(){
	delete this;
}

int & ListItem::getContent(){
	return content;
}

ListItem* ListItem::getNext(){
	return next;
}

ListItem* ListItem::getPrevious(){
	return previous;
}