#include "metro.h"

using namespace std;

Line*find_line(Lines& lines, const string& name)

find_line(Lines& lines, const string& name) {
    // TODO: искать линию под названием `name` в списке `lines`/
 Line*curtline = lines.first;
	while(curtline != nullptr)
    {
		if (curtline -> name == name)
                return curtline;
		curtline = curtline -> next;
	}
    return nullptr;
}

Line*
add_line(Lines& lines, const string& name) {
    // TODO: добавить линию под названием `name` в конец списка `lines`.
    return nullptr;
}

Line*
get_line(Lines& lines, const string& name) {
    // TODO: найти линию под названием `name` в `lines` или создать и добавить её в конец.
    return nullptr;
}
