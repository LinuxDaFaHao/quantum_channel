#ifndef HUBBARD_SRC_MYUTIL_H
#define HUBBARD_SRC_MYUTIL_H
#include <stdlib.h>
#include <vector>

size_t GetNumofMps();
void Show(std::vector<size_t> v);
bool ParserBondDimension(int, char *[], std::vector<size_t>& );
std::vector<size_t> GenerateDirectStateLabel(const size_t ly,
                                             const size_t lx,
                                             const size_t num_hole,
                                             const size_t ky_int);
std::vector<std::vector<size_t>> GenAllOrderedMomentumPairs(const size_t ly);
std::vector<std::vector<size_t>> GenAllMomentumPairs(const size_t ly);
std::vector<std::vector<size_t>> GenAllMomentumPairs3(const size_t ly);

std::vector<size_t> BinaryTransform(size_t n, size_t digit);

#endif //HUBBARD_SRC_MYUTIL_H