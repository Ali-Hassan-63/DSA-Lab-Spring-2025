template<class ItemType>
class Stack {
public:
	Stack();
	Stack(int max);
	~Stack();
	int IsEmpty() const;
	int IsFull() const;
	void push(ItemType newItem);
	void pop(ItemType& newItem);
private:
	int top;
	int maxStack;
	ItemType* items;
};
