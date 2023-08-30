#include <iostream>

class Warlock
{
private:
	std::string name;
	std::string title;
public:
	std::string const &getName() const;
	std::string const &getTitle() const;
	void setTitle(std::string const &title);
	void introduce() const;
	Warlock(std::string const &name, std::string const &title);
	~Warlock();
};
