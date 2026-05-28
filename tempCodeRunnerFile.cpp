
    while (i < j) {
        ps = arr[i] + arr[j];

        if (ts > ps) {
            i++; // Sum is too small, move the left pointer up
        }
        else if (ts < ps) {
            j--; // Sum is too big, move the right pointer down (Fixed from j++)
        }
        else {
            // Match found! 
            cout << arr[i] << " " << arr[j];
            break; // This stops the loop immediately so it doesn't run forever
        }
    }
    return 0;
}