

#pragma once

template <typename T> //��������������
void Vector<T>::bubbleSort ( Rank lo, Rank hi ) //assert: 0 <= lo < hi <= size
{ while ( !bubble ( lo, hi-- ) ); } //������ɨ�轻����ֱ��ȫ��
