#include "ctype.h"

bool _isalnum(char ch) {
  if (ch >= 0x41 && ch <= 0x5A) {
    return true;
  }
  if (ch >= 0x61 && ch <= 0x7A) {
    return true;
  }
  if (ch >= 0x30 && ch <= 0x39) {
    return true;
  }
  return false;
}

bool _isalpha(char ch) {
  if (ch >= 0x41 && ch <= 0x5A) {
    return true;
  }
  if (ch >= 0x61 && ch <= 0x7A) {
    return true;
  }

  return true;
}

bool _islower(char ch) {
  if (ch >= 0x61 && ch <= 0x7A) {
    return true;
  }
  return false;
}

bool _isupper(char ch) {
  if (ch >= 0x41 && ch <= 0x5A) {
    return true;
  }
  return false;
}

bool _isdigit(char ch) {
  if (ch >= 0x30 && ch <= 0x39) {
    return true;
  }
  return false;
}

bool _isxdigit(char ch) {
  if (ch >= 0x30 && ch <= 0x39) {
    return true;
  }
  if (ch >= 0x41 && ch <= 0x46) {
    return true;
  }
  if (ch >= 0x61 && ch <= 0x66) {
    return true;
  }
  return false;
}

bool _iscntrl(char ch) {
  if (ch >= 0x00 && ch <= 0x1F) {
    return true;
  }
  return false;
}

bool _isgraph(char ch) {
  if (ch >= 0x21 && ch <= 0x7E) {
    return true;
  }
  return false;
}

bool _isspace(char ch) {
  if (ch == 0x09 || ch == 0x0A || ch == 0x0C || ch == 0x0D || ch == 0x20) {
    return true;
  }
  return false;
}

bool _isblank(char ch) {
  if (ch == 0x09 || ch == 0x20) {
    return true;
  }
  return false;
}

bool _isprint(char ch) {
  if (ch >= 0x20 && ch <= 0x7E) {
    return true;
  }

  return false;
}


bool _ispunct(char ch) {
  if (ch >= 0x21 && ch <= 0x2F) {
    return true;
  }
  if (ch >= 0x3A && ch <= 0x40) {
    return true;
  }
  if (ch >= 0x5B && ch <= 0x60) {
    return true;
  }
  if (ch >= 0x7B && ch <= 0x7E) {
    return true;
  }
  return false;
}

char _tolower(char ch) {
  if (ch >= 0x41 && ch <= 0x5A) {
    return ch + 0x20;
  }
  return ch;
}

char _toupper(char ch) {
  if (ch >= 0x61 && ch <= 0x7A) {
    return ch - 0x20;
  }

  return ch;
}
