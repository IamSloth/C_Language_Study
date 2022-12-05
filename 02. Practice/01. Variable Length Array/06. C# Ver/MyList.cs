using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PracticeCode
{
    class MyList<T>
    {
        const int DEFALUT_SIZE = 1;

        T[] _data = new T[DEFALUT_SIZE];

        int Count = 0;
        int Capacity { get { return _data.Length; } set { } }
        public int Length { get { return Count;} private set { } }

        public void Add(T item)
        {
            if(Count >= Capacity)
            {
                T[] temp = new T[Capacity * 2];
                for(int i = 0; i<Count; i++)
                {
                    temp[i] = _data[i];
                }

                _data = temp;
            }
            _data[Count] = item;
            Count++;
        }

        public T this[int index]
        {
            get { return _data[index]; }
            set { _data[index] = value; }
        }


        public void RemoveAt(int index)
        {
            for(int i = index; i<Count-1; i++)
            {
                _data[index] = _data[index+1];
            }
            _data[Count - 1] = default(T);
            Count--;
        }

    }

    /*
     *      _data.Add(101);
            _data.Add(102);
            _data.Add(103);
            _data.Add(104);
            _data.Add(105);
            _data[1] = 3;

            for(int i = 0; i<_data.Length; i++)
            {
                Console.WriteLine(_data[i]);
            }
     * 
     */
}
