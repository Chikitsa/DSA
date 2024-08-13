WITH Sales AS (
    SELECT
        u.product_id,
        u.units,
        p.price
    FROM
        UnitsSold u
    JOIN
        Prices p
    ON
        u.product_id = p.product_id
        AND u.purchase_date BETWEEN p.start_date AND p.end_date
),
ProductRevenue AS (
    SELECT
        p.product_id,
        SUM(s.price * s.units) AS total_revenue,
        SUM(s.units) AS total_units
    FROM
        Prices p
    LEFT JOIN
        Sales s
    ON
        p.product_id = s.product_id
    GROUP BY
        p.product_id
)
SELECT
    pr.product_id,
    COALESCE(ROUND(pr.total_revenue / pr.total_units, 2), 0) AS average_price
FROM
    ProductRevenue pr;
