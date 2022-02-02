/*
maintain a distance counter, if traversing to left, dist counter is decremented by 1 else incremented by 1
and using dist_counter as index, use a map to store values

=> simple and got the logic :)
*/


Class Solution
{
    public:
    
    // nested map to store node data verticle wise and level wise
    // m > verticle_index > row_index > {4} or {2} or {5,6}
    
    map<int,map<int,vector<int>>> m;
    
    void solve(Node *root, int x, int y)
    {
        if (!root) return;
        
        m[y][x].push_back(root->data);
        
        solve(root->left, x + 1, y - 1);
        solve(root->right, x + 1, y + 1);
    }
    
    vector<int> verticalOrder(Node *root)
    {
        solve(root, 0, 0);
        vector<int> v;
        for (auto it1: m)
        {
            for (auto it2: it1.second)
            {
                for (int x: it2.second) 
                {
                    v.push_back(x);
                }
            }
        }
        return v;
    }
};
