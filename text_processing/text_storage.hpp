#pragma once

#include <string>

namespace text_processing
{

class TextStorage
{
public:
	using IteratorType = std::string::const_iterator;
	TextStorage() = default;
	TextStorage(std::string&& value);

	void Aquire(std::string&& value);
	void Clear();
	bool IsValid();
	IteratorType Begin() const;
	IteratorType End() const;
private:
	std::string mValue;
};

} // namespace text_processing