class Dot
{
    private:
        float *m_points{};
        int m_dimension{};
    public:
        Dot();
        Dot(int dimension, float *pPoints);
        float *getDot();
        void setDot(int dimension, float* points);
        void printDot();
        int getDimension() const;
        ~Dot();
};

