#include "metro.h"

using namespace std;

Line*
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
        Line* line_add_end = new Line;
        line_add_end -> name = line_name;
        line_add_end -> next = nullptr;
        lines.last -> next = line_add_end;
        lines.last = line_add_end;
            return nullptr;
}

Line*
get_line(Lines& lines, const string& name) {
    // TODO: найти линию под названием `name` в `lines` или создать и добавить её в конец.
    return nullptr;
}
