<!DOCTYPE html>
<html lang="en">
<head>
<meta charset="UTF-8">
<meta name="viewport" content="width=device-width, initial-scale=1.0">
<title>Full Hackpad README</title>
<style>
    body {
        font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif;
        line-height: 1.6;
        margin: 40px auto;
        max-width: 900px;
        color: #333;
        background-color: #f9f9f9;
    }
    h1, h2, h3 {
        color: #2c3e50;
        margin-top: 1.5em;
    }
    h1 {
        font-size: 2.2em;
    }
    table {
        width: 100%;
        border-collapse: collapse;
        margin: 20px 0;
        background-color: #fff;
    }
    table, th, td {
        border: 1px solid #bbb;
    }
    th, td {
        padding: 12px;
        text-align: left;
    }
    th {
        background-color: #f0f0f0;
    }
    img {
        border-radius: 6px;
        margin: 8px 0;
        display: block;
        max-width: 100%;
        height: auto;
    }
    .section {
        margin-bottom: 40px;
        padding-bottom: 20px;
        border-bottom: 1px solid #ddd;
    }
    ul, ol {
        margin-left: 20px;
    }
    code {
        background: #eee;
        padding: 3px 6px;
        border-radius: 4px;
        font-family: 'Courier New', Courier, monospace;
    }
    .highlight {
        color: #e74c3c;
        font-weight: bold;
    }
    a {
        color: #2980b9;
        text-decoration: none;
    }
    a:hover {
        text-decoration: underline;
    }
</style>
</head>
<body>

<h1>Full Hackpad – 12 Key Macro Pad with Encoder</h1>
<div class="section">
<h2>All Images</h2>
<table>
<tr>
    <th>Image</th>
    <th>Description</th>
</tr>
<tr>
    <td><img src="imges/full_hackpad.png" alt="Full CAD model"></td>
    <td>Full Hackpad CAD model</td>
</tr>
<tr>
    <td><img src="imges/scematic.png" alt="Board schematic"></td>
    <td>Board schematic</td>
</tr>
<tr>
    <td><img src="imges/PCB.png" alt="PCB layout"></td>
    <td>PCB layout</td>
</tr>
<tr>
    <td><img src="imges/fit.png" alt="Fitment test"></td>
    <td>Fitment / assembly test</td>
</tr>
</table>
</div>

<div class="section">
<h2>💻 Firmware Overview</h2>
<p>The code is designed to be a <strong>largley configurable macropad</strong>. Each key can be assigned shortcuts, macros, or other functions.</p>
<ul>
    <li>Rotary encoder os <strong>volume control</strong>.</li>
</ul>
</div>

<div class="section">
<h2>Bill of Materials (BOM)</h2>
<table>
<tr>
    <th>Component</th>
    <th>Quantity</th>
    <th>Notes</th>
</tr>
<tr><td>10K Resistor</td><td>2</td><td>i will Provid</td></tr>
<tr><td>Rotary Encoder w/ Push Button</td><td>1</td><td>If the one you ship dose not have a Switch, i will Provid it</td></tr>
<tr><td>Cherry MX Switches</td><td>12</td><td></td></tr>
<tr><td>DSA Keycaps</td><td>12</td><td></td></tr>
<tr><td>M3x5x4 Heat-set Inserts</td><td>4</td><td></td></tr>
<tr><td>M3x12mm SHCS Bolts</td><td>4</td><td></td></tr>
<tr><td>Seeed XIAO RP2040</td><td>1</td><td></td></tr>
<tr><td>PCB</td><td>1</td><td></td></tr>
<tr><td>3D Printed Case (2 parts)</td><td>1 Set</td><td>Top + bottom shell</td></tr>
</table>
</div>

<div class="section">
<h2>Assembly Steps</h2>
<ol>
    <li>Install <strong>heat-set brass inserts</strong>.</li>
    <li>Solder switches, encoder, and other components.</li>
    <li>Attach <strong>XIAO RP2040</strong> to PCB.</li>
    <li>Flash firmware.</li>
    <li>Assemble the case using screws.</li>
    <li>Install keycaps./li>
</ol>
</div>
</body>
</html>
