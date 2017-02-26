#ifndef SCREEN_H
#define SCREEN_H

#include <iostream>

class Screen{
public:
    friend class Window_mgr;
    typedef std::string::size_type pos;
    Screen() = default;
    Screen(pos ht, pos wd, char c): height(ht), width(wd),
    contents(ht * wd, c) {}
    char get() const { return contents[curser]; }
    inline char get(pos ht, pos wd) const;
    Screen &set(char);
    Screen &set(pos, pos, char);
    Screen &move(pos r, pos c);
    Screen& display(std::ostream &os){
        do_display(os); return *this;
    }
    const Screen& display(std::ostream &os) const{
        do_display(os); return *this;
    }
    void some_member() const;
private:
    pos curser;
    pos height = 0, width = 0;
    std::string contents;
    mutable size_t access_ctr;
    void do_display(std::ostream &os) const { os << contents; }
};

inline
Screen &Screen::move(pos r, pos c){
    pos row = r * width;
    curser = row + c;
    return *this;
}

char Screen::get(pos r, pos c) const{
    pos row = r * width;
    return contents[row + c];
}

void Screen::some_member() const {
    ++access_ctr;
} 

Screen & Screen::set(char c){
    contents[curser] = c;
    return *this;
}

Screen & Screen::set(pos r, pos col, char ch){
    contents[r*width + col] = ch;
    return *this;
}

#endif