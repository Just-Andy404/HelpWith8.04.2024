
/*
����������� ����� Reservoir (������). ����� �����������
������ ����� ���� "��������". ����� ������ ���������: ����������� �� ���������,
����������� � �����������, ��� ������������� ����������� ����������
� ����������� �����������.
�������� ������ ���:
    1. ����������� ���������������� ������ (������ * ����� *
       ������������ �������);
    2. ����������� ������� ������ �����������;
    3. ����� ��� ��������, ����������� �� ������� � ������
    ���� (����-����; �������-����);
    4. ��� ��������� ������� ������ ����������� �������� ������
    ����;
    5. ��� ��������� �ᒺ���;
    6. ��������� ������ �� ���������� ������������ (������ set
    � get).
�������� ��������� ��� ������ � �������. ����������� ������������ ������
�������� ������ � ������������ ����������, �������� �������� �� �������.
����������� ����������� ������ ���������� �� �������� ������� � ��������� ����,
�������� ����.
����������� explicit ����������� � ����������� �������-����� (��������, ���
����������� ������ � ������� � �.�.)
*/
#pragma once
#include <iostream>

class Reservoir {
    char* sName;
    int width;
    int length;
    int maximum_depth;
    char* type;

public:
    Reservoir();
    Reservoir(char* reservoirName, int userWidth, int userLength, int userMaximum_depth);
    Reservoir(const Reservoir& other);
    ~Reservoir();
    double Determining_the_approximate_volume();
    int water_surface_area();
    bool check_if_the_type_of_water(const Reservoir& other);
    bool ater_bodies_belong_to_the_same_type(Reservoir& other);
    void output();
    void input();
    void add(Reservoir*& array, int& size);

    char* getName()
    {
        return sName;
    }
    int getLength()
    {
        return this->length;
    }
    int getWidth()
    {
        return this->width;
    }
    int getMaximumDepth()
    {
        return this->maximum_depth;
    }
    char* getType()
    {
        return type;
    }

    void SetsName(char* n)
    {
        int size = strlen(n);
        this->sName = new char[size + 1];
        strcpy_s(this->sName, size+1, n);
        delete[] n;
    }
    void SetWidth(int width)
    {
        this->width = width;
    }
    void SetLength(int length)
    {
        this->length = length;
    }
    void SetMaximum_depth(int maximum_depth)
    {
        this->maximum_depth = maximum_depth;
    }
    void SetType(char* type)
    {
        int size = strlen(type);
        this->sName = new char[size + 1];
        for (int i = 0; i < size + 1; i++) {
            this->sName[i] = type[i];
            if (type[i] == '\0') {
                this->sName[i] = '\0';
                break;
            }
        }
    }
};