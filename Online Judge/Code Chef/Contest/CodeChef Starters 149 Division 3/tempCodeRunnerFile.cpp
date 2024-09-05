cin >> tc;
    while (tc--)
    {
        cin >> n;
        vector<long long> arr(n);
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        long long negsm = 0, possm = 0, neg = 0, mxneg = INT_MIN, mnpos=INT_MAX, zr = 0, pos=0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] > 0)
            {
                possm += arr[i];
                pos++;
                mnpos = min(mnpos, arr[i]);
            }
            else if (arr[i] < 0)
            {
                negsm += arr[i];
                neg++;
                mxneg = max(mxneg, arr[i]);
            }
            else
                zr++;
        }

        long long res = 0;
        if (neg % 2 == 0 || (neg + zr) % 2 == 0)
        {
            res = possm - negsm;
        }
        else
        {
            negsm-=mxneg;

            if(pos>0)
            {
                possm-=mnpos;
                res = possm - negsm + max(mnpos+mxneg, (mnpos+mxneg)*(-1));
            }
            else
            {
                res=negsm;
            }


        }

        cout << res << endl;