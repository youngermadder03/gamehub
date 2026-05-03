<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <title>My Game Hub</title>redempskhidsgamehub
    <style>
        /* A little bit of CSS to make it look like a real site */
        body { font-family: sans-serif; text-align: center; background-color: #f4f4f4; }
        .container { display: flex; justify-content: center; gap: 20px; padding: 20px; }
        .game-card { background: white; padding: 20px; border-radius: 10px; box-shadow: 0 4px 8px rgba(0,0,0,0.1); width: 300px; }
        button { background-color: #28a745; color: white; border: none; padding: 10px 20px; cursor: pointer; border-radius: 5px; }
        button:hover { background-color: #218838; }
    </style>
</head>
<body>

    <header>
        <h1>Welcome to My Game Hub</h1>
        <p>Check out my latest projects and download them below!</p>
    </header>

    <main class="container">
        <div class="game-card">
            <h2>Game Title 1</h2>
            <p>Short description of what makes this game awesome.</p>
            <a href="your-game-file.zip" download>
                <button>Download (.zip)</button>
            </a>
        </div>

        <div class="game-card">
            <h2>Game Title 2</h2>
            <p>Another cool game description goes here.</p>
            <a href="another-game.zip" download>
                <button>Download (.zip)</button>
            </a>
        </div>
    </main>

    <footer>
        <p>&copy; 2026 My Gaming Studio</p>
    </footer>

</body>
</html>
<div class="game-card">
    <h2>Super Quest</h2>
    <p>Available for both Desktop and Android.</p>

    <div class="download-option">
        <strong>💻 PC (Windows):</strong>
        <a href="downloads/super-quest-pc.zip" download>
            <button class="pc-btn">Download .ZIP</button>
        </a>
    </div>

    <br>

    <div class="download-option">
        <strong>📱 Mobile (Android):</strong>
        <a href="downloads/super-quest.apk" download>
            <button class="mobile-btn">Download .APK</button>
        </a>
    </div>
</div>
<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>My Game Downloads</title>
    <style>
        body { font-family: 'Segoe UI', Tahoma, Geneva, Verdana, sans-serif; line-height: 1.6; margin: 0; background: #1a1a1a; color: #fff; text-align: center; }
        .container { display: flex; flex-wrap: wrap; justify-content: center; padding: 40px; gap: 30px; }
        
        /* Game Card Styling */
        .game-card { background: #2d2d2d; border: 1px solid #444; border-radius: 12px; padding: 25px; width: 320px; transition: 0.3s; }
        .game-card:hover { transform: translateY(-10px); border-color: #00ff88; }
        
        /* Button Styling */
        .download-group { margin-top: 20px; display: flex; flex-direction: column; gap: 10px; }
        .btn { padding: 12px; border: none; border-radius: 6px; cursor: pointer; font-weight: bold; text-decoration: none; color: #000; }
        .pc-btn { background-color: #00d2ff; }
        .mobile-btn { background-color: #00ff88; }
        
        h1 { margin-top: 50px; color: #00ff88; }
    </style>
</head>
<body>

    <h1>🎮 redempskhidsgamehub's Game Studio</h1>
    <p>Choose your platform and start playing!</p>

    <div class="container">
        <div class="game-card">
            <h3>Cyber Racer</h3>
            <p>An intense neon racing game.</p>
            <div class="download-group">
                <a href="games/cyber-racer-win.zip" class="btn pc-btn" download>Download for PC</a>
                <a href="games/cyber-racer.apk" class="btn mobile-btn" download>Download for Android</a>
            </div>
        </div>

        <div class="game-card">
            <h3>Shadow Ninja</h3>
            <p>2D platformer with stealth mechanics.</p>
            <div class="download-group">
                <a href="games/ninja-pc.zip" class="btn pc-btn" download>Download for PC</a>
                <a href="games/ninja-mobile.apk" class="btn mobile-btn" download>Download for Android</a>
            </div>
        </div>
    </div>

</body>
</html>
