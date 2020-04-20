#ifndef PRINT_TOKENS_H
#define PRINT_TOKENS_H

#define CHPL_FLEX_PRINT_TOKENS

void printToken(int token);

inline void print_token(const char* s);

void startPrintingTokens(const char* file);

void stopPrintingTokens();

#endif
